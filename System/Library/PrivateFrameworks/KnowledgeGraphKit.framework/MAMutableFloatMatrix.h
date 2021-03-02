/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <KnowledgeGraphKit/MAFloatMatrix.h>

@class _TtC17KnowledgeGraphKit27MAMutableFloatMatrixWrapper;

@interface MAMutableFloatMatrix : MAFloatMatrix

@property (nonatomic,readonly) _TtC17KnowledgeGraphKit27MAMutableFloatMatrixWrapper * wrapper; 
+(Class)wrapperClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)appendRow:(id)arg1 ;
-(void)subtractScalar:(float)arg1 ;
-(void)addScalar:(float)arg1 ;
-(void)setFloat:(float)arg1 atRow:(long long)arg2 column:(long long)arg3 ;
-(void)subtractMatrix:(id)arg1 ;
@end
