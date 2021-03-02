/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSHashTable;

@interface _HDAssertionRecord : NSObject {

	NSString* _assertionIdentifier;
	NSHashTable* _assertions;

}

@property (nonatomic,copy,readonly) NSString * assertionIdentifier;              //@synthesize assertionIdentifier=_assertionIdentifier - In the implementation block
@property (nonatomic,readonly) NSHashTable * assertions;                         //@synthesize assertions=_assertions - In the implementation block
-(NSString *)assertionIdentifier;
-(id)initWithAssertionIdentifier:(id)arg1 ;
-(NSHashTable *)assertions;
@end
