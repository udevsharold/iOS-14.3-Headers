/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSTables/TSTables-Structs.h>
@class NSMutableArray;

@interface TSTLayoutValidationBundle : NSObject {

	unordered_map<unsigned short, double, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, double> > >* _columnToWidth;
	os_unfair_lock_s _lock;
	NSMutableArray* _widthHeightCollections;

}

@property (nonatomic,retain) NSMutableArray * widthHeightCollections;              //@synthesize widthHeightCollections=_widthHeightCollections - In the implementation block
-(id)init;
-(void)cacheWidth:(double)arg1 ofColumn:(unsigned short)arg2 ;
-(double)widthOfColumn:(unsigned short)arg1 handleCacheMissUsingBlock:(/*^block*/id)arg2 ;
-(id)generateWidthHeightCollection;
-(NSMutableArray *)widthHeightCollections;
-(void)setWidthHeightCollections:(NSMutableArray *)arg1 ;
@end
