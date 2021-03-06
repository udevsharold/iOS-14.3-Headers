/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ICSQLiteConnectionOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _readOnly;
	NSString* _databasePath;
	long long _cacheSize;

}

@property (nonatomic,copy) NSString * databasePath;                        //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,nonatomic) long long cacheSize;                          //@synthesize cacheSize=_cacheSize - In the implementation block
@property (assign,getter=isReadOnly,nonatomic) BOOL readOnly;              //@synthesize readOnly=_readOnly - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)databasePath;
-(long long)cacheSize;
-(void)setCacheSize:(long long)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(void)setDatabasePath:(NSString *)arg1 ;
-(BOOL)isReadOnly;
-(void)setCacheSizeWithNumberOfKilobytes:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCacheSizeWithNumberOfDatabasePages:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDatabasePath:(id)arg1 ;
-(int)applyToDatabase:(sqlite3Ref)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

