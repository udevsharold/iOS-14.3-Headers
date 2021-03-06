/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CSAccessory;


@protocol CSAccessoryStatusProviding <NSObject>
@property (nonatomic,readonly) CSAccessory * lastAttachedAccessory; 
@property (nonatomic,readonly) CSAccessory * lastDetachedAccessory; 
@property (nonatomic,readonly) BOOL isAccessoryAnimationAllowed; 
@required
-(CSAccessory *)lastAttachedAccessory;
-(CSAccessory *)lastDetachedAccessory;
-(BOOL)isAccessoryAnimationAllowed;

@end

