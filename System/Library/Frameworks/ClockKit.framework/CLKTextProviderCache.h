/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClockKit/ClockKit-Structs.h>
@class NSMutableDictionary;

@interface CLKTextProviderCache : NSObject {

	NSMutableDictionary* _cachesByStyle;

}
-(id)attributedStringAndSize:(CGSize*)arg1 forMaxWidth:(double)arg2 withStyle:(id)arg3 generator:(/*^block*/id)arg4 ;
-(id)attributedStringForIndex:(unsigned long long)arg1 withStyle:(id)arg2 generator:(/*^block*/id)arg3 ;
-(id)_cacheForStyle:(id)arg1 ;
@end

