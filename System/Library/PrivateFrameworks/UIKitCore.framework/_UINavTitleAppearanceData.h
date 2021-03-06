/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBarAppearanceData.h>

@class NSDictionary;

@interface _UINavTitleAppearanceData : _UIBarAppearanceData {

	NSDictionary* _titleTextAttributes;
	NSDictionary* _largeTitleTextAttributes;
	UIOffset _titlePositionAdjustment;

}

@property (nonatomic,copy) NSDictionary * titleTextAttributes; 
@property (assign,nonatomic) UIOffset titlePositionAdjustment; 
@property (nonatomic,copy) NSDictionary * largeTitleTextAttributes; 
+(id)standardTitleData;
+(id)decodeFromCoder:(id)arg1 prefix:(id)arg2 ;
-(BOOL)checkEqualTo:(id)arg1 ;
-(UIOffset)titlePositionAdjustment;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(id)replicate;
-(void)setLargeTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(long long)hashInto:(long long)arg1 ;
-(void)describeInto:(id)arg1 ;
-(void)encodeToCoder:(id)arg1 prefix:(id)arg2 ;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)largeTitleTextAttributes;
@end

