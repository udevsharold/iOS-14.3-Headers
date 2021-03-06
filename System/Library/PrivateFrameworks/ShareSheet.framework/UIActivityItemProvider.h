/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <Foundation/NSOperation.h>
#import <UIKit/UIActivityItemSource.h>

@class NSString;

@interface UIActivityItemProvider : NSOperation <UIActivityItemSource> {

	id _placeholderItem;
	NSString* _activityType;
	id _providedItem;

}

@property (nonatomic,retain) id placeholderItem;                                          //@synthesize placeholderItem=_placeholderItem - In the implementation block
@property (nonatomic,retain) id providedItem;                                             //@synthesize providedItem=_providedItem - In the implementation block
@property (setter=_setActivityType:,nonatomic,copy) NSString * activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) id item; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)item;
-(NSString *)activityType;
-(id)init;
-(void)main;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)placeholderItem;
-(void)setPlaceholderItem:(id)arg1 ;
-(void)setProvidedItem:(id)arg1 ;
-(id)providedItem;
-(void)_setActivityType:(id)arg1 ;
-(BOOL)_shouldExecuteItemOperationForActivity:(id)arg1 ;
-(id)initWithPlaceholderItem:(id)arg1 ;
@end

