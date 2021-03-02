/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPButton.h>

@class MPCPlayerCommandRequest, NSString;

@interface MediaControlsTransportButton : MPButton {

	BOOL _shouldPresentActionSheet;
	BOOL _performingHighlightAnimation;
	MPCPlayerCommandRequest* _touchUpInsideCommandRequest;
	MPCPlayerCommandRequest* _holdBeginCommandRequest;
	MPCPlayerCommandRequest* _holdEndCommandRequest;
	double _cursorScale;
	NSString* _identifier;

}

@property (nonatomic,retain) MPCPlayerCommandRequest * touchUpInsideCommandRequest;                                  //@synthesize touchUpInsideCommandRequest=_touchUpInsideCommandRequest - In the implementation block
@property (nonatomic,retain) MPCPlayerCommandRequest * holdBeginCommandRequest;                                      //@synthesize holdBeginCommandRequest=_holdBeginCommandRequest - In the implementation block
@property (nonatomic,retain) MPCPlayerCommandRequest * holdEndCommandRequest;                                        //@synthesize holdEndCommandRequest=_holdEndCommandRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentActionSheet;                                                          //@synthesize shouldPresentActionSheet=_shouldPresentActionSheet - In the implementation block
@property (getter=isPerformingHighlightAnimation,nonatomic,readonly) BOOL performingHighlightAnimation;              //@synthesize performingHighlightAnimation=_performingHighlightAnimation - In the implementation block
@property (assign,nonatomic) double cursorScale;                                                                     //@synthesize cursorScale=_cursorScale - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                                  //@synthesize identifier=_identifier - In the implementation block
+(BOOL)_cursorInteractionEnabled;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(BOOL)isPerformingHighlightAnimation;
-(void)setShouldPresentActionSheet:(BOOL)arg1 ;
-(void)setCursorScale:(double)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(MPCPlayerCommandRequest *)holdBeginCommandRequest;
-(NSString *)identifier;
-(void)setHoldBeginCommandRequest:(MPCPlayerCommandRequest *)arg1 ;
-(void)setHoldEndCommandRequest:(MPCPlayerCommandRequest *)arg1 ;
-(MPCPlayerCommandRequest *)touchUpInsideCommandRequest;
-(double)cursorScale;
-(BOOL)shouldPresentActionSheet;
-(MPCPlayerCommandRequest *)holdEndCommandRequest;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTouchUpInsideCommandRequest:(MPCPlayerCommandRequest *)arg1 ;
@end
