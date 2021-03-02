/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoverSheet/CoverSheet-Structs.h>
@class NSString, UIColor;

@interface CSAccessory : NSObject {

	NSString* _endpointUUID;
	long long _type;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;

}

@property (nonatomic,retain) NSString * endpointUUID;                          //@synthesize endpointUUID=_endpointUUID - In the implementation block
@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIColor * primaryColor;                           //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;                         //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (nonatomic,readonly) BOOL shouldLockScreenWhenAttached; 
@property (nonatomic,readonly) BOOL shouldDelayAnimation; 
@property (nonatomic,readonly) BOOL shouldShowAnimation; 
@property (nonatomic,readonly) BOOL chimeOnDetach; 
@property (nonatomic,readonly) BOOL hasStaticView; 
@property (getter=isWindowed,nonatomic,readonly) BOOL windowed; 
@property (nonatomic,readonly) CGRect visibleScreenCoordinates; 
+(id)accessoryWithType:(long long)arg1 primaryColor:(id)arg2 secondoryColor:(id)arg3 ;
-(UIColor *)primaryColor;
-(UIColor *)secondaryColor;
-(void)setType:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 endpointUUID:(id)arg2 ;
-(id)description;
-(long long)type;
-(NSString *)endpointUUID;
-(id)accessoryTypeString;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(BOOL)isWindowed;
-(BOOL)shouldShowAnimation;
-(CGRect)visibleScreenCoordinates;
-(BOOL)shouldLockScreenWhenAttached;
-(BOOL)shouldDelayAnimation;
-(BOOL)chimeOnDetach;
-(void)setEndpointUUID:(NSString *)arg1 ;
-(BOOL)hasStaticView;
-(long long)accessoryTypeFromDictionary:(id)arg1 ;
-(id)colorForP3ColorData:(id)arg1 ;
@end
