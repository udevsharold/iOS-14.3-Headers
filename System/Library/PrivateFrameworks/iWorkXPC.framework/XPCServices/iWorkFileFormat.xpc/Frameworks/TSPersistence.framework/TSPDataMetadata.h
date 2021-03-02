/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSReading/TSPObject.h>

@class TSUColor;

@interface TSPDataMetadata : TSPObject {

	TSUColor* _fallbackColor;

}

@property (nonatomic,copy) TSUColor * fallbackColor;              //@synthesize fallbackColor=_fallbackColor - In the implementation block
-(void)setFallbackColor:(TSUColor *)arg1 ;
-(TSUColor *)fallbackColor;
-(id)copyWithContext:(id)arg1 ;
-(void)saveToMessage:(DataMetadata*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromMessage:(const DataMetadata*)arg1 unarchiver:(id)arg2 ;
@end
