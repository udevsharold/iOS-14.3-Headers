/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLPropertyValue : NSObject {

	BOOL _dirty;
	id _value;

}

@property (nonatomic,retain,readonly) id value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL dirty;                     //@synthesize dirty=_dirty - In the implementation block
-(id)value;
-(void)setDirty:(BOOL)arg1 ;
-(id)initWithValue:(id)arg1 dirty:(BOOL)arg2 ;
-(void)dealloc;
-(BOOL)dirty;
@end
