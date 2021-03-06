/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DNormalDirectionMapper.h>

@interface TSCH3DBarNormalDirectionMapper : TSCH3DNormalDirectionMapper {

	long long mWallOffset;
	long long mCrossSectionCount;
	long long mSpineCount;
	long long mBeginLimit;
	long long mEndLimit;

}
-(void)mapFromVertexArray:(const tvec3<float>*)arg1 normalArray:(const tvec3<float>*)arg2 normalMatrix:(const tmat3x3<float>*)arg3 numVertices:(long long)arg4 destination:(vector<unsigned char, std::__1::allocator<unsigned char> >*)arg5 ;
-(id)initWithWallOffset:(long long)arg1 crossSectionCount:(long long)arg2 spineCount:(long long)arg3 beginLimit:(long long)arg4 endLimit:(long long)arg5 ;
@end

