//
//  ViewController.h
//  DrawMe
//
//  Created by Jim Rush on 31/08/15.
//  Copyright (c) 2015 Jim Rush. All rights reserved.
//  Taken from the Ray Wenderlich tutorial 'how to make a simple drawing app with uikit'
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    CGPoint lastPoint;//position of the last point touched
    CGFloat red;//RGB values of currently selected colour
    CGFloat green;
    CGFloat blue;
    CGFloat brush;//Width and opacity
    CGFloat opacity;
    BOOL mouseSwiped;
    
}

@property (weak, nonatomic) IBOutlet UIImageView *mainImage;
@property (weak, nonatomic) IBOutlet UIImageView *tempDrawImage;

- (IBAction)pencilPressed:(id)sender;

- (IBAction)eraserPressed:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *Reset;
@property (weak, nonatomic) IBOutlet UIButton *Settings;
@property (weak, nonatomic) IBOutlet UIButton *Save;

@end

