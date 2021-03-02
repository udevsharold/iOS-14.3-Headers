/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, INPriceRange;


@protocol INRidePartySizeOptionExport <NSObject,JSExport>
@property (assign,nonatomic) NSRange partySizeRange; 
@property (nonatomic,copy) NSString * sizeDescription; 
@property (nonatomic,copy) INPriceRange * priceRange; 
@required
-(id)init;
-(NSRange)partySizeRange;
-(void)setPartySizeRange:(NSRange)arg1;
-(NSString *)sizeDescription;
-(void)setSizeDescription:(id)arg1;
-(void)setPriceRange:(id)arg1;
-(INPriceRange *)priceRange;

@end
