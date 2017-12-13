//
//  NFChannelUIConfig.h
//  NewsFeedsUISDK
//
//  Created by neal on 2017/12/4.
//  Copyright © 2017年 NetEase. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NFUIOption.h"

@interface NFChannelUIOption : NFUIOption

@property(nonatomic, assign) uint32_t backgroundColor;
@property(nonatomic, assign) uint32_t normalTitleColor;
@property(nonatomic, assign) uint32_t selectedTitleColor;
@property(nonatomic, assign) uint32_t selectedIndicatorColor;
@property(nonatomic, assign, getter=isShowBottomLine)  BOOL showBottomLine;
@property(nonatomic, assign) uint32_t bottomLineColor;

@end
