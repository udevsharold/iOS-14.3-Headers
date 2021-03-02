/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSSStyle, TSSPropertyMap;

@interface TSTConcurrentStylesheetKey : NSObject {

	TSSStyle* _style;
	TSSPropertyMap* _propertyMap;

}

@property (nonatomic,retain) TSSStyle * style;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) TSSPropertyMap * propertyMap;              //@synthesize propertyMap=_propertyMap - In the implementation block
-(TSSStyle *)style;
-(unsigned long long)hash;
-(void)setStyle:(TSSStyle *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(TSSPropertyMap *)propertyMap;
-(void)setPropertyMap:(TSSPropertyMap *)arg1 ;
-(id)initWithStyle:(id)arg1 andPropertyMap:(id)arg2 ;
@end
