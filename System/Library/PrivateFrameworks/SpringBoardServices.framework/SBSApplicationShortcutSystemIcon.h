/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSString;

@interface SBSApplicationShortcutSystemIcon : SBSApplicationShortcutIcon {

	long long _type;
	NSString* _systemImageName;

}

@property (nonatomic,readonly) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * systemImageName;              //@synthesize systemImageName=_systemImageName - In the implementation block
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(unsigned long long)hash;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initForSubclass;
-(NSString *)systemImageName;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithSystemImageName:(id)arg1 ;
@end
