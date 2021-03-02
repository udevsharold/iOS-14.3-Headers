/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPersistentHistoryToken;

@interface PHPersistentChangeToken : NSObject <NSCopying, NSSecureCoding> {

	NSPersistentHistoryToken* _persistentHistoryToken;
	int _version;

}

@property (nonatomic,readonly) NSPersistentHistoryToken * persistentHistoryToken;              //@synthesize persistentHistoryToken=_persistentHistoryToken - In the implementation block
@property (nonatomic,readonly) int version;                                                    //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(int)currentVersion;
+(id)currentTokenForContext:(id)arg1 ;
+(id)tokenWithPersistentHistoryToken:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPersistentHistoryToken:(id)arg1 version:(int)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithPersistentHistoryToken:(id)arg1 ;
-(NSPersistentHistoryToken *)persistentHistoryToken;
-(BOOL)isEqual:(id)arg1 ;
-(int)version;
-(BOOL)isEqualToPersistentChangeToken:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
