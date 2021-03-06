/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleMediaServicesUIDynamic/AppleMediaServicesUIDynamic-Structs.h>
@class AMSUIDDynamicImpressionMetrics;

@interface AMSUIDDynamicImpressionItem : NSObject {

	 frame;
	 impressionMetrics;

}

@property (assign,nonatomic) CGRect frame; 
@property (retain,nonatomic) AMSUIDDynamicImpressionMetrics * impressionMetrics; 
-(CGRect)frame;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 impressionMetrics:(id)arg2 ;
-(AMSUIDDynamicImpressionMetrics *)impressionMetrics;
-(void)setImpressionMetrics:(AMSUIDDynamicImpressionMetrics *)arg1 ;
@end

