//
//  NFArticleUIConfig.h
//  NewsFeedsUISDK
//
//  Created by neal on 2017/12/4.
//  Copyright © 2017年 NetEase. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NFUIOption.h"
#import "NFFeedsUIOption.h"

//typedef NS_ENUM(uint32_t, NFArticleTextSize) {
//    NFArticleTextSizeSmall = 14,
//    NFArticleTextSizeMiddle = 16,
//    NFArticleTextSizeLarge = 20,
//};

@interface NFArticleUIOption : NFUIOption

#pragma mark - navigation bar config
@property(nonatomic, assign) uint32_t navBackgroundColor;
@property(nonatomic, assign) uint32_t navBottomLineColor;
@property(nonatomic, assign) uint32_t navTintColor;     //（元素颜色）

@property(nonatomic, strong) UIImage *navBackButtonImage;
@property(nonatomic, strong) UIImage *navBackButtonHighlightImage;
@property(nonatomic, strong) UIImage *navShareButtonImage;
@property(nonatomic, strong) UIImage *navShareButtonHighlightImage;


#pragma mark - content config
@property(nonatomic, assign) uint32_t backgroundColor;
@property(nonatomic, assign) uint32_t titleColor;
@property(nonatomic, assign) uint32_t sourceTextColor;
@property(nonatomic, assign) uint32_t timeTextColor;
@property(nonatomic, assign) uint32_t separatorColor;

@property(nonatomic, assign) uint32_t articleTextColor;
@property(nonatomic, assign) CGFloat articleTextSize;

@property(nonatomic, assign) CGFloat paragraphIndent;   // 可取的值为 0， 1， 2。
@property(nonatomic, assign) CGFloat paragraphSpace;    // 可取的值为 1.5， 2， 2.5。
@property(nonatomic, assign) CGFloat lineSpace;         // 可取的值为 1.2， 1.5， 2。
@property(nonatomic, assign) uint32_t imagePlaceholderColor;

@property(nonatomic, strong) NFFeedsUIOption   *relatedUIOption;

- (NSDictionary *)cssKeyValue;
@end
