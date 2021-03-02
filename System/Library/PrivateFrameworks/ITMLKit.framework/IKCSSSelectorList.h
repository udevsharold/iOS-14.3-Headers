/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKMutableArray;

@interface IKCSSSelectorList : NSObject <NSCopying> {

	IKMutableArray* _selectors;

}

@property (nonatomic,readonly) IKMutableArray * selectors;              //@synthesize selectors=_selectors - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)count;
-(void)addSelector:(id)arg1 ;
-(IKMutableArray *)selectors;
-(id)selectorAtIndex:(unsigned long long)arg1 ;
-(id)firstSelector;
-(id)lastSelector;
@end
