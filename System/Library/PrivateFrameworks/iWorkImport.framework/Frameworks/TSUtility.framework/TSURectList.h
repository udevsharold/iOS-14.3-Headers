/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@interface TSURectList : NSObject {

	vector<CGRect, std::__1::allocator<CGRect> >* mRectList;

}

@property (nonatomic,readonly) unsigned long long count; 
+(id)rectListWithRect:(CGRect)arg1 ;
-(CGRect)rectAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithRect:(CGRect)arg1 ;
-(id)initWithRectList:(id)arg1 ;
@end
