//
//  MoviePanelController.h
//  VideoMonkey
//
//  Created by Chris Marrin on 11/12/08.
//  Copyright 2008 Chris Marrin. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <QTKit/QTKit.h>

@interface MoviePanelController : NSObject {
@private
    IBOutlet QTMovieView* m_movieView;
    IBOutlet NSProgressIndicator* m_progress;
    
    BOOL m_isVisible;
    BOOL m_movieIsSet;
    NSMutableString* m_filename;
    int m_controlHeight;
    NSTimeInterval m_selectionStart;
    NSTimeInterval m_selectionEnd;
}

-(IBAction)startSelection:(id)sender;
-(IBAction)endSelection:(id)sender;
-(IBAction)encodeSelection:(id)sender;

-(void) setMovie:(NSString*) filename;

@end
