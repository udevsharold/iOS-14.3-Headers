/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TPSSerializableObject.h>

@class NSString;

@interface TPSInstalledAppInfo : TPSSerializableObject {

	NSString* _bundleID;
	NSString* _minVersion;
	NSString* _maxVersion;

}

@property (nonatomic,copy) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * minVersion;              //@synthesize minVersion=_minVersion - In the implementation block
@property (nonatomic,copy) NSString * maxVersion;              //@synthesize maxVersion=_maxVersion - In the implementation block
-(void)setBundleID:(NSString *)arg1 ;
-(void)setMinVersion:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSString *)minVersion;
-(NSString *)maxVersion;
-(id)initWithDictionary:(id)arg1 ;
-(id)debugDescription;
-(void)setMaxVersion:(NSString *)arg1 ;
@end

