/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PICurveControlPoint : NSObject <NSCopying> {

	BOOL _editable;
	double _x;
	double _y;

}

@property (x,nonatomic,readonly) double x;                                   //@synthesize x=_x - In the implementation block
@property (y,nonatomic,readonly) double y;                                   //@synthesize y=_y - In the implementation block
@property (getter=isEditable,nonatomic,readonly) BOOL editable;              //@synthesize editable=_editable - In the implementation block
-(BOOL)isEditable;
-(double)y;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)x;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithX:(double)arg1 y:(double)arg2 editable:(BOOL)arg3 ;
@end
