//
//  NFFeedsUIConfig.h
//  NewsFeedsUISDK
//
//  Created by neal on 2017/12/4.
//  Copyright © 2017年 NetEase. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NFUIOption.h"

@interface NFFeedsUIOption : NFUIOption

@property(nonatomic, assign) uint32_t backgroundColor;
@property(nonatomic, assign) uint32_t cellBackgroundColor;
@property(nonatomic, assign) uint32_t highlightCellBackgroundColor;
@property(nonatomic, assign) uint32_t cellTitleColor;
@property(nonatomic, assign) CGFloat cellTitleSize; //  14 16 18
@property(nonatomic, assign) uint32_t sourceTextColor;

@property(nonatomic, assign) BOOL showSeparator;
@property(nonatomic, assign) uint32_t separatorColor;

@property(nonatomic, assign) uint32_t lastReadBackgroundColor;
@property(nonatomic, assign) uint32_t lastReadBorderColor;
@property(nonatomic, assign) uint32_t lastReadTextColor;

@property(nonatomic, copy)   NSString *pullingText;
@property(nonatomic, copy)   NSString *releaseToRefreshText;
@property(nonatomic, copy)   NSString *loadingText;
@property(nonatomic, assign) uint32_t refreshTextColor;

@property(nonatomic, assign) uint32_t refreshSuccessBackgroundColor;
@property(nonatomic, assign) uint32_t refreshSuccessTextColor;

@property(nonatomic, copy)   NSString *loadMoreText;
@property(nonatomic, assign) uint32_t loadMoreTextColor;
@property(nonatomic, assign) uint32_t noMoreTextColor;

@end
