/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PLTrip : NSObject {

	unsigned long long _type;
	NSArray* _items;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (readonly) NSArray * items;                      //@synthesize items=_items - In the implementation block
-(id)initWithItems:(id)arg1 type:(unsigned long long)arg2 ;
-(NSArray *)items;
-(id)description;
-(unsigned long long)type;
-(id)typeDescription;
-(double)duration;
@end
