/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class NSMutableArray;

@interface _IKDSEPrototypeBundle : NSObject {

	NSMutableArray* _prototypes;
	NSMutableArray* _entries;
	struct {
		BOOL areEntriesDirty;
	}  _flags;

}
-(id)init;
-(id)prototypeForItemAtIndex:(unsigned long long)arg1 ;
-(id)allPrototypes;
-(void)addPrototype:(id)arg1 forIndexes:(id)arg2 ;
@end

