/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IntentsFoundation/IntentsFoundation-Structs.h>
@interface IFObjectHasher : NSObject {

	SipHasher _hasher;
	unsigned long long _hash;
	BOOL _finalized;

}
-(id)combineBool:(BOOL)arg1 ;
-(id)combineContentsOfPropertyListObject:(id)arg1 ;
-(unsigned long long)finalize;
-(id)combineInteger:(unsigned long long)arg1 ;
-(id)combine:(id)arg1 ;
-(id)combineBytes:(void*)arg1 size:(unsigned long long)arg2 ;
@end
