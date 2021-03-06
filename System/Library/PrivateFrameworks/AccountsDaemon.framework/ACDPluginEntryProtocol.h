/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet, NSString;


@protocol ACDPluginEntryProtocol
@property (nonatomic,readonly) NSSet * supportedAccountTypes; 
@property (nonatomic,readonly) NSSet * supportedDataclasses; 
@property (nonatomic,readonly) id principalObject; 
@property (nonatomic,readonly) NSString * identifier; 
@required
-(NSString *)identifier;
-(NSSet *)supportedDataclasses;
-(id)principalObject;
-(BOOL)principalObjectRespondsToSelector:(SEL)arg1;
-(NSSet *)supportedAccountTypes;

@end

