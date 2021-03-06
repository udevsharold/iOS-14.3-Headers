/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol BCSICloudServerEnvironmentProtocol
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSString * containerID; 
@property (nonatomic,readonly) long long containerEnvironment; 
@property (nonatomic,readonly) NSDictionary * additionalRequestHTTPHeaders; 
@required
-(NSString *)containerID;
-(long long)type;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(long long)containerEnvironment;

@end

