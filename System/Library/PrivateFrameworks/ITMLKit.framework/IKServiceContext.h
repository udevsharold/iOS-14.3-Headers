/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, IKViewElement;

@interface IKServiceContext : NSObject {

	NSDictionary* _contextDictionary;
	IKViewElement* _element;

}

@property (nonatomic,copy,readonly) NSDictionary * contextDictionary;              //@synthesize contextDictionary=_contextDictionary - In the implementation block
@property (nonatomic,readonly) IKViewElement * element;                            //@synthesize element=_element - In the implementation block
-(NSDictionary *)contextDictionary;
-(IKViewElement *)element;
-(id)initWithContextDictionary:(id)arg1 element:(id)arg2 ;
@end
