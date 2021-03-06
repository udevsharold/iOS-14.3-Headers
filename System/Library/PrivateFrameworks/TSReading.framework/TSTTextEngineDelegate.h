/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPTextDelegate.h>

@class TSWPPadding;

@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate> {

	TSWPPadding* mPadding;
	unsigned mVerticalAlignment;

}
-(unsigned)verticalAlignment;
-(void)dealloc;
-(id)padding;
-(BOOL)forceWesternLineBreaking;
-(id)initWithPadding:(UIEdgeInsets)arg1 verticalAlignment:(unsigned)arg2 ;
@end

