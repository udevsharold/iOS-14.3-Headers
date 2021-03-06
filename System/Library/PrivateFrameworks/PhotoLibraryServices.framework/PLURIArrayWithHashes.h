/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableArray;

@interface PLURIArrayWithHashes : NSObject {

	CFArrayRef _uris;
	CFArrayRef _hashes;
	NSMutableArray* _attributeValues;
	NSMutableArray* _relationshipValues;

}

@property (assign,nonatomic) CFArrayRef uris;                                  //@synthesize uris=_uris - In the implementation block
@property (assign,nonatomic) CFArrayRef hashes;                                //@synthesize hashes=_hashes - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributeValues;                 //@synthesize attributeValues=_attributeValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * relationshipValues;              //@synthesize relationshipValues=_relationshipValues - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) BOOL isUpdate; 
-(BOOL)isUpdate;
-(CFArrayRef)uris;
-(id)init;
-(id)description;
-(CFArrayRef)hashes;
-(void)setUris:(CFArrayRef)arg1 ;
-(unsigned long long)count;
-(NSMutableArray *)attributeValues;
-(void)setHashes:(CFArrayRef)arg1 ;
-(id)initForUpdates:(BOOL)arg1 ;
-(void)setAttributeValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)relationshipValues;
-(void)setRelationshipValues:(NSMutableArray *)arg1 ;
@end

