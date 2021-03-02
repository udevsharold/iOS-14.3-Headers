/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString, _BlastDoorLPImage, NSDate;

@interface _BlastDoorLPFileMetadata : _BlastDoorLPSpecializationMetadata {

	NSString* _name;
	NSString* _type;
	unsigned long long _size;
	_BlastDoorLPImage* _thumbnail;
	_BlastDoorLPImage* _icon;
	NSDate* _creationDate;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long size;                    //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * thumbnail;              //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * icon;                   //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                      //@synthesize creationDate=_creationDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(NSDate *)creationDate;
-(void)setName:(NSString *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_BlastDoorLPImage *)thumbnail;
-(void)setType:(NSString *)arg1 ;
-(_BlastDoorLPImage *)icon;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setThumbnail:(_BlastDoorLPImage *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)size;
-(void)setIcon:(_BlastDoorLPImage *)arg1 ;
-(NSString *)type;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
