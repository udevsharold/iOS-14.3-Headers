/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSArrayChange : NSObject

@property (readonly) unsigned long long changeType; 
@property (readonly) unsigned long long sourceIndex; 
@property (readonly) unsigned long long destinationIndex; 
@property (readonly) id value; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)value;
-(id)initWithType:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 destinationIndex:(unsigned long long)arg3 value:(id)arg4 ;
-(unsigned long long)sourceIndex;
-(unsigned long long)changeType;
-(unsigned long long)destinationIndex;
@end

