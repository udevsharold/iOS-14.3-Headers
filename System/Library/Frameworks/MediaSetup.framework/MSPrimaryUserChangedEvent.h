/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MSPrimaryUserChangedEvent : NSObject {

	BOOL _changedToHomeOwner;
	BOOL _changedToUserNotInHome;
	BOOL _isAutomatic;

}

@property (assign,nonatomic) BOOL changedToHomeOwner;                  //@synthesize changedToHomeOwner=_changedToHomeOwner - In the implementation block
@property (assign,nonatomic) BOOL changedToUserNotInHome;              //@synthesize changedToUserNotInHome=_changedToUserNotInHome - In the implementation block
@property (assign,nonatomic) BOOL isAutomatic;                         //@synthesize isAutomatic=_isAutomatic - In the implementation block
-(BOOL)isAutomatic;
-(void)setIsAutomatic:(BOOL)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(void)setChangedToHomeOwner:(BOOL)arg1 ;
-(void)setChangedToUserNotInHome:(BOOL)arg1 ;
-(BOOL)changedToHomeOwner;
-(BOOL)changedToUserNotInHome;
@end

