//
//  ColorView.h
//  SomeUIViewDemo
//
//  Created by student on 10/15/15.
//  Copyright © 2015 student. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ColorView : UIView
- (instancetype) initWithHex: (NSString*) hex
                       alpha: (CGFloat) alpha
                       frame: (CGRect) rect;
- (void) fadeOut;
@property (nonatomic,strong) NSString* hex; //getter and setter
@end
