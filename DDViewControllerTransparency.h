#import <UIKit/UIKit.h>
#import "DDViewControllerPeekDetection.h"

@interface UIViewController (DDViewControllerTransparency)
-(void)setDDProperTransparency;
-(void)setDDProperTransparencyOnView:(UIView *)view;
-(BOOL)DDHasProperTransparency;
-(void)setDDHasProperTransparency:(BOOL)hasProperTransparency;
@end
