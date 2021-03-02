/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol TRINamespaceUpdateProtocol <NSObject>
@property (nonatomic,readonly) unsigned namespaceId; 
@property (nonatomic,readonly) NSString * namespaceName; 
@property (nonatomic,readonly) id<TRINotificationToken> token; 
@required
-(NSString *)namespaceName;
-(id<TRINotificationToken>)token;
-(unsigned)namespaceId;

@end
