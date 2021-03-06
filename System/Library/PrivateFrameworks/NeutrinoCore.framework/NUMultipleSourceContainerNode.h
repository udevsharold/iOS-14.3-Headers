/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceContainerNode.h>

@class NSArray;

@interface NUMultipleSourceContainerNode : NUSourceContainerNode {

	NSArray* _sources;

}

@property (retain) NSArray * sources;              //@synthesize sources=_sources - In the implementation block
-(void)setSources:(NSArray *)arg1 ;
-(NSArray *)sources;
-(id)description;
-(id)initWithAssetIdentifier:(id)arg1 ;
-(id)sourceNodeForPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(SCD_Struct_NU7*)arg2 error:(out id*)arg3 ;
-(id)primarySourceNode;
-(id)initWithSourceNodes:(id)arg1 assetIdentifier:(id)arg2 ;
@end

