/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface RMConfigurationSubscriberDescription : NSObject {

	NSArray* _types;
	NSString* _principalClassName;

}

@property (nonatomic,copy,readonly) NSArray * types;                            //@synthesize types=_types - In the implementation block
@property (nonatomic,copy,readonly) NSString * principalClassName;              //@synthesize principalClassName=_principalClassName - In the implementation block
-(NSArray *)types;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)principalClassName;
-(id)initWithTypes:(id)arg1 principalClassName:(id)arg2 ;
@end

