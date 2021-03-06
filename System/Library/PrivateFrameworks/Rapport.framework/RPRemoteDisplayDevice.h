/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Rapport/RPEndpoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RPRemoteDisplayDevice : RPEndpoint <NSSecureCoding> {

	unsigned _flags;
	NSString* _persistentIdentifier;

}

@property (nonatomic,copy) NSString * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned flags;                           //@synthesize flags=_flags - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(NSString *)persistentIdentifier;
-(id)descriptionWithLevel:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(unsigned)updateWithEndpoint:(id)arg1 ;
-(unsigned)flags;
-(void)encodeWithCoder:(id)arg1 ;
@end

