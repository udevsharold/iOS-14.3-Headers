/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, RTMapItem;

@interface RTFavoritePlace : NSObject {

	NSString* _title;
	RTMapItem* _mapItem;

}

@property (nonatomic,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) RTMapItem * mapItem;              //@synthesize mapItem=_mapItem - In the implementation block
-(id)init;
-(id)description;
-(RTMapItem *)mapItem;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 mapItem:(id)arg2 ;
@end
