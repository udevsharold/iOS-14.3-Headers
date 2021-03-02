/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface ARFaceData : NSObject <NSSecureCoding> {

	BOOL _mirrored;
	NSArray* _detectedFaces;
	NSDictionary* _faceMeshPayload;

}

@property (nonatomic,retain) NSArray * detectedFaces;                      //@synthesize detectedFaces=_detectedFaces - In the implementation block
@property (nonatomic,retain) NSDictionary * faceMeshPayload;               //@synthesize faceMeshPayload=_faceMeshPayload - In the implementation block
@property (assign,getter=isMirrored,nonatomic) BOOL mirrored;              //@synthesize mirrored=_mirrored - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)setMirrored:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)detectedFaces;
-(void)setDetectedFaces:(NSArray *)arg1 ;
-(BOOL)isMirrored;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFaceMeshPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)faceMeshPayload;
-(id)initWithMetadataObjects:(id)arg1 mirroredVideoInput:(BOOL)arg2 stripDetectionData:(BOOL)arg3 ;
@end
