/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileInstallation/MobileInstallation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDictionary;

@interface MIStoreMetadataSubGenre : NSObject <NSSecureCoding, NSCopying> {

	NSString* _genre;
	NSNumber* _genreID;

}

@property (nonatomic,copy) NSString * genre;                                         //@synthesize genre=_genre - In the implementation block
@property (nonatomic,retain) NSNumber * genreID;                                     //@synthesize genreID=_genreID - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)supportsSecureCoding;
-(void)setGenre:(NSString *)arg1 ;
-(NSString *)genre;
-(NSNumber *)genreID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGenreID:(NSNumber *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithGenre:(id)arg1 genreID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

