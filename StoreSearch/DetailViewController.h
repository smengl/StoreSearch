//
//  DetailViewController.h
//  StoreSearch
//
//  Created by Seak Meng Lay on 2/11/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SearchResult;
@interface DetailViewController : UIViewController
typedef enum {
    DetailViewControllerAnimationTypeSlide,
    DetailViewControllerAnimationTypeFade
} DetailViewControllerAnimationType;
@property (nonatomic, strong) SearchResult *searchResult;
- (void)presentInParentViewController:(UIViewController *)parentViewController;
- (void)dismissFromParentViewControllerWithAnimationType:(DetailViewControllerAnimationType)animationType;
@end
