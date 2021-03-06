/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASDProgress : NSObject <NSCopying, NSSecureCoding> {

	BOOL _reportRemotely;
	NSString* _bundleID;
	long long _completedUnitCount;
	long long _totalUnitCount;

}

@property (retain) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (assign) long long completedUnitCount;              //@synthesize completedUnitCount=_completedUnitCount - In the implementation block
@property (assign) BOOL reportRemotely;                       //@synthesize reportRemotely=_reportRemotely - In the implementation block
@property (assign) long long totalUnitCount;                  //@synthesize totalUnitCount=_totalUnitCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBundleID:(NSString *)arg1 ;
-(long long)totalUnitCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)completedUnitCount;
-(NSString *)bundleID;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setReportRemotely:(BOOL)arg1 ;
-(BOOL)reportRemotely;
-(void)encodeWithCoder:(id)arg1 ;
@end

