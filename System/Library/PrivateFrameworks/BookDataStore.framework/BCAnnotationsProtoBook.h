/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookDataStore/BookDataStore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface BCAnnotationsProtoBook : PBCodable <NSCopying> {

	NSMutableArray* _annotations;
	NSString* _appVersion;
	NSString* _assetID;
	NSString* _assetVersion;

}

@property (nonatomic,retain) NSString * assetID;                        //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,retain) NSString * appVersion;                     //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetVersion; 
@property (nonatomic,retain) NSString * assetVersion;                   //@synthesize assetVersion=_assetVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * annotations;              //@synthesize annotations=_annotations - In the implementation block
+(Class)annotationType;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSMutableArray *)annotations;
-(NSString *)assetVersion;
-(void)setAnnotations:(NSMutableArray *)arg1 ;
-(NSString *)appVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addAnnotation:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(void)setAssetID:(NSString *)arg1 ;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAssetVersion:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)assetID;
-(void)clearAnnotations;
-(BOOL)hasAssetVersion;
-(unsigned long long)annotationsCount;
-(id)annotationAtIndex:(unsigned long long)arg1 ;
@end

