/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSArray, NSSet;


@protocol PSBrokerCapabilities <NSObject>
@property (readonly) NSUUID * identifier; 
@property (copy,readonly) NSArray * exportedTopics; 
@property (copy,readonly) NSSet * supportedTransportIdentifiers; 
@required
-(NSUUID *)identifier;
-(NSSet *)supportedTransportIdentifiers;
-(NSArray *)exportedTopics;

@end
