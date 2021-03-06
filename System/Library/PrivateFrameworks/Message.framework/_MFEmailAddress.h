/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _MFEmailAddress : NSObject {

	NSString* _address;
	NSString* _displayName;

}

@property (nonatomic,copy,readonly) NSString * fullAddress; 
@property (nonatomic,copy,readonly) NSString * address;                  //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
-(id)initWithAddress:(id)arg1 ;
-(NSString *)address;
-(id)initWithAddress:(id)arg1 displayName:(id)arg2 ;
-(NSString *)fullAddress;
-(NSString *)displayName;
@end

