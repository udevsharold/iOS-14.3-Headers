/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ASDClipServiceBroker;
@interface ASDAccountStatusTask : NSObject <NSSecureCoding> {

	id<ASDClipServiceBroker> _broker;
	BOOL _lookupFamilyInfoIfNecessary;

}

@property (assign) BOOL lookupFamilyInfoIfNecessary;              //@synthesize lookupFamilyInfoIfNecessary=_lookupFamilyInfoIfNecessary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)statusWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)lookupFamilyInfoIfNecessary;
-(void)setLookupFamilyInfoIfNecessary:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

