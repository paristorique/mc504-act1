




<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    
    
    <title>mc504-act1/dicas.c at master · 096952/mc504-act1 · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <meta property="fb:app_id" content="1401488693436528"/>

      <meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="096952/mc504-act1" name="twitter:title" /><meta content="mc504-act1 - Actividade 1 de mc504" name="twitter:description" /><meta content="https://0.gravatar.com/avatar/833e456ef1f8cd798005d1f98925735a?d=https%3A%2F%2Fidenticons.github.com%2F4c097cddf7d08690ce542b5bc6e9c53d.png&amp;r=x&amp;s=400" name="twitter:image:src" />
<meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="https://0.gravatar.com/avatar/833e456ef1f8cd798005d1f98925735a?d=https%3A%2F%2Fidenticons.github.com%2F4c097cddf7d08690ce542b5bc6e9c53d.png&amp;r=x&amp;s=400" property="og:image" /><meta content="096952/mc504-act1" property="og:title" /><meta content="https://github.com/096952/mc504-act1" property="og:url" /><meta content="mc504-act1 - Actividade 1 de mc504" property="og:description" />

    <link rel="assets" href="https://github.global.ssl.fastly.net/">
    <link rel="conduit-xhr" href="https://ghconduit.com:25035/">
    <link rel="xhr-socket" href="/_sockets" />


    <meta name="msapplication-TileImage" content="/windows-tile.png" />
    <meta name="msapplication-TileColor" content="#ffffff" />
    <meta name="selected-link" value="repo_source" data-pjax-transient />
    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="github" name="octolytics-app-id" /><meta content="BB6A268A:4030:25530CE:5326246A" name="octolytics-dimension-request_id" />
    

    
    
    <link rel="icon" type="image/x-icon" href="https://github.global.ssl.fastly.net/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="u/0gLGVbBidVNM1g9eOvy0sU1SCNE806CFMb4cyb3B4=" name="csrf-token" />

    <link href="https://github.global.ssl.fastly.net/assets/github-38269a8d7da2a54f27974215f4f2925eaad4d0d5.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://github.global.ssl.fastly.net/assets/github2-38408e89653ef671f9e6bc74ffaf307a3ac02571.css" media="all" rel="stylesheet" type="text/css" />
    


      <script crossorigin="anonymous" src="https://github.global.ssl.fastly.net/assets/frameworks-55976bc637c425207bc6e52d7ac4c125773713de.js" type="text/javascript"></script>
      <script async="async" crossorigin="anonymous" src="https://github.global.ssl.fastly.net/assets/github-a2d1d75e0ca9e7a3074ef5f60daf8b98e3aee934.js" type="text/javascript"></script>
      
      <meta http-equiv="x-pjax-version" content="a493a618dbe99e953da59450934392d2">

        <link data-pjax-transient rel='permalink' href='/096952/mc504-act1/blob/8ac1dc9683641e58d769bd42a4562152a6043c9e/dicas.c'>

  <meta name="description" content="mc504-act1 - Actividade 1 de mc504" />

  <meta content="6922281" name="octolytics-dimension-user_id" /><meta content="096952" name="octolytics-dimension-user_login" /><meta content="17806698" name="octolytics-dimension-repository_id" /><meta content="096952/mc504-act1" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="true" name="octolytics-dimension-repository_is_fork" /><meta content="17548766" name="octolytics-dimension-repository_parent_id" /><meta content="paristorique/mc504-act1" name="octolytics-dimension-repository_parent_nwo" /><meta content="17548766" name="octolytics-dimension-repository_network_root_id" /><meta content="paristorique/mc504-act1" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/096952/mc504-act1/commits/master.atom" rel="alternate" title="Recent Commits to mc504-act1:master" type="application/atom+xml" />

  </head>


  <body class="logged_out  env-production windows vis-public fork page-blob">
    <a href="#start-of-content" class="accessibility-aid js-skip-to-content">Skip to content</a>
    <div class="wrapper">
      
      
      
      


      
      <div class="header header-logged-out">
  <div class="container clearfix">

    <a class="header-logo-wordmark" href="https://github.com/">
      <span class="mega-octicon octicon-logo-github"></span>
    </a>

    <div class="header-actions">
        <a class="button primary" href="/join">Sign up</a>
      <a class="button signin" href="/login?return_to=%2F096952%2Fmc504-act1%2Fblob%2Fmaster%2Fdicas.c">Sign in</a>
    </div>

    <div class="command-bar js-command-bar  in-repository">

      <ul class="top-nav">
          <li class="explore"><a href="/explore">Explore</a></li>
        <li class="features"><a href="/features">Features</a></li>
          <li class="enterprise"><a href="https://enterprise.github.com/">Enterprise</a></li>
          <li class="blog"><a href="/blog">Blog</a></li>
      </ul>
        <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">

<input type="text" data-hotkey="/ s" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" autocapitalize="off"
    
    
      data-repo="096952/mc504-act1"
      data-branch="master"
      data-sha="d6aee2540576bac3c386d82a01b61de087254e67"
  >

    <input type="hidden" name="nwo" value="096952/mc504-act1" />

    <div class="select-menu js-menu-container js-select-menu search-context-select-menu">
      <span class="minibutton select-menu-button js-menu-target" role="button" aria-haspopup="true">
        <span class="js-select-button">This repository</span>
      </span>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container" aria-hidden="true">
        <div class="select-menu-modal">

          <div class="select-menu-item js-navigation-item js-this-repository-navigation-item selected">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" class="js-search-this-repository" name="search_target" value="repository" checked="checked" />
            <div class="select-menu-item-text js-select-button-text">This repository</div>
          </div> <!-- /.select-menu-item -->

          <div class="select-menu-item js-navigation-item js-all-repositories-navigation-item">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" name="search_target" value="global" />
            <div class="select-menu-item-text js-select-button-text">All repositories</div>
          </div> <!-- /.select-menu-item -->

        </div>
      </div>
    </div>

  <span class="help tooltipped tooltipped-s" aria-label="Show command bar help">
    <span class="octicon octicon-question"></span>
  </span>


  <input type="hidden" name="ref" value="cmdform">

</form>
    </div>

  </div>
</div>



      <div id="start-of-content" class="accessibility-aid"></div>
          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        

<ul class="pagehead-actions">


  <li>
    <a href="/login?return_to=%2F096952%2Fmc504-act1"
    class="minibutton with-count js-toggler-target star-button tooltipped tooltipped-n"
    aria-label="You must be signed in to star a repository" rel="nofollow">
    <span class="octicon octicon-star"></span>Star
  </a>

    <a class="social-count js-social-count" href="/096952/mc504-act1/stargazers">
      0
    </a>

  </li>

    <li>
      <a href="/login?return_to=%2F096952%2Fmc504-act1"
        class="minibutton with-count js-toggler-target fork-button tooltipped tooltipped-n"
        aria-label="You must be signed in to fork a repository" rel="nofollow">
        <span class="octicon octicon-git-branch"></span>Fork
      </a>
      <a href="/096952/mc504-act1/network" class="social-count">
        1
      </a>
    </li>
</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="repo-label"><span>public</span></span>
          <span class="mega-octicon octicon-repo"></span>
          <span class="author">
            <a href="/096952" class="url fn" itemprop="url" rel="author"><span itemprop="title">096952</span></a>
          </span>
          <span class="repohead-name-divider">/</span>
          <strong><a href="/096952/mc504-act1" class="js-current-repository js-repo-home-link">mc504-act1</a></strong>

          <span class="page-context-loader">
            <img alt="Octocat-spinner-32" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
          </span>

            <span class="fork-flag">
              <span class="text">forked from <a href="/paristorique/mc504-act1">paristorique/mc504-act1</a></span>
            </span>
        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">
      <div class="repository-with-sidebar repo-container new-discussion-timeline js-new-discussion-timeline  ">
        <div class="repository-sidebar clearfix">
            

<div class="sunken-menu vertical-right repo-nav js-repo-nav js-repository-container-pjax js-octicon-loaders">
  <div class="sunken-menu-contents">
    <ul class="sunken-menu-group">
      <li class="tooltipped tooltipped-w" aria-label="Code">
        <a href="/096952/mc504-act1" aria-label="Code" class="selected js-selected-navigation-item sunken-menu-item" data-gotokey="c" data-pjax="true" data-selected-links="repo_source repo_downloads repo_commits repo_tags repo_branches /096952/mc504-act1">
          <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>


      <li class="tooltipped tooltipped-w" aria-label="Pull Requests">
        <a href="/096952/mc504-act1/pulls" aria-label="Pull Requests" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-gotokey="p" data-selected-links="repo_pulls /096952/mc504-act1/pulls">
            <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull Requests</span>
            <span class='counter'>0</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>


    </ul>
    <div class="sunken-menu-separator"></div>
    <ul class="sunken-menu-group">

      <li class="tooltipped tooltipped-w" aria-label="Pulse">
        <a href="/096952/mc504-act1/pulse" aria-label="Pulse" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="pulse /096952/mc504-act1/pulse">
          <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped tooltipped-w" aria-label="Graphs">
        <a href="/096952/mc504-act1/graphs" aria-label="Graphs" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="repo_graphs repo_contributors /096952/mc504-act1/graphs">
          <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped tooltipped-w" aria-label="Network">
        <a href="/096952/mc504-act1/network" aria-label="Network" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-selected-links="repo_network /096952/mc504-act1/network">
          <span class="octicon octicon-git-branch"></span> <span class="full-word">Network</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>
    </ul>


  </div>
</div>

              <div class="only-with-full-nav">
                

  

<div class="clone-url open"
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=clone">
  <h3><strong>HTTPS</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/096952/mc504-act1.git" readonly="readonly">

    <span aria-label="copy to clipboard" class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="https://github.com/096952/mc504-act1.git" data-copied-hint="copied!"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>

  

<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=clone">
  <h3><strong>Subversion</strong> checkout URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/096952/mc504-act1" readonly="readonly">

    <span aria-label="copy to clipboard" class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="https://github.com/096952/mc504-act1" data-copied-hint="copied!"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>


<p class="clone-options">You can clone with
      <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a>
      or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <span class="help tooltipped tooltipped-n" aria-label="Get help on which URL is right for you.">
    <a href="https://help.github.com/articles/which-remote-url-should-i-use">
    <span class="octicon octicon-question"></span>
    </a>
  </span>
</p>


  <a href="http://windows.github.com" class="minibutton sidebar-button" title="Save 096952/mc504-act1 to your computer and use it in GitHub Desktop." aria-label="Save 096952/mc504-act1 to your computer and use it in GitHub Desktop.">
    <span class="octicon octicon-device-desktop"></span>
    Clone in Desktop
  </a>

                <a href="/096952/mc504-act1/archive/master.zip"
                   class="minibutton sidebar-button"
                   aria-label="Download 096952/mc504-act1 as a zip file"
                   title="Download 096952/mc504-act1 as a zip file"
                   rel="nofollow">
                  <span class="octicon octicon-cloud-download"></span>
                  Download ZIP
                </a>
              </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:0ab5332ae545295e109a2d36aed7e604 -->

<p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

<a href="/096952/mc504-act1/find/master" data-pjax data-hotkey="t" class="js-show-file-finder" style="display:none">Show File Finder</a>

<div class="file-navigation">
  

<div class="select-menu js-menu-container js-select-menu" >
  <span class="minibutton select-menu-button js-menu-target" data-hotkey="w"
    data-master-branch="master"
    data-ref="master"
    role="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <span class="octicon octicon-git-branch"></span>
    <i>branch:</i>
    <span class="js-select-button">master</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-remove-close js-menu-close"></span>
      </div> <!-- /.select-menu-header -->

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div><!-- /.select-menu-tabs -->
      </div><!-- /.select-menu-filters -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item selected">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/096952/mc504-act1/blob/master/dicas.c"
                 data-name="master"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="master">master</a>
            </div> <!-- /.select-menu-item -->
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

    </div> <!-- /.select-menu-modal -->
  </div> <!-- /.select-menu-modal-holder -->
</div> <!-- /.select-menu -->

  <div class="breadcrumb">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/096952/mc504-act1" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">mc504-act1</span></a></span></span><span class="separator"> / </span><strong class="final-path">dicas.c</strong> <span aria-label="copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="dicas.c" data-copied-hint="copied!"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>


  <div class="commit commit-loader file-history-tease js-deferred-content" data-url="/096952/mc504-act1/contributors/master/dicas.c">
    Fetching contributors…

    <div class="participation">
      <p class="loader-loading"><img alt="Octocat-spinner-32-eaf2f5" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32-EAF2F5.gif" width="16" /></p>
      <p class="loader-error">Cannot retrieve contributors at this time</p>
    </div>
  </div>

<div class="file-box">
  <div class="file">
    <div class="meta clearfix">
      <div class="info file-name">
        <span class="icon"><b class="octicon octicon-file-text"></b></span>
        <span class="mode" title="File Mode">file</span>
        <span class="meta-divider"></span>
          <span>90 lines (74 sloc)</span>
          <span class="meta-divider"></span>
        <span>3.043 kb</span>
      </div>
      <div class="actions">
        <div class="button-group">
            <a class="minibutton tooltipped tooltipped-w"
               href="http://windows.github.com" aria-label="Open this file in GitHub for Windows">
                <span class="octicon octicon-device-desktop"></span> Open
            </a>
              <a class="minibutton disabled tooltipped tooltipped-w" href="#"
                 aria-label="You must be signed in to make or propose changes">Edit</a>
          <a href="/096952/mc504-act1/raw/master/dicas.c" class="button minibutton " id="raw-url">Raw</a>
            <a href="/096952/mc504-act1/blame/master/dicas.c" class="button minibutton js-update-url-with-hash">Blame</a>
          <a href="/096952/mc504-act1/commits/master/dicas.c" class="button minibutton " rel="nofollow">History</a>
        </div><!-- /.button-group -->
          <a class="minibutton danger disabled empty-icon tooltipped tooltipped-w" href="#"
             aria-label="You must be signed in to make or propose changes">
          Delete
        </a>
      </div><!-- /.actions -->
    </div>
        <div class="blob-wrapper data type-c js-blob-data">
        <table class="file-code file-diff tab-size-8">
          <tr class="file-code-line">
            <td class="blob-line-nums">
              <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>

            </td>
            <td class="blob-line-code"><div class="code-body highlight"><pre><div class='line' id='LC1'><span class="cp">#include &lt;pthread.h&gt;</span></div><div class='line' id='LC2'><span class="cp">#include &lt;stdio.h&gt;</span></div><div class='line' id='LC3'><span class="cp">#include &lt;stdlib.h&gt;</span></div><div class='line' id='LC4'><span class="cp">#include &lt;unistd.h&gt;</span></div><div class='line' id='LC5'><span class="cp">#include &quot;verificacao.h&quot;</span></div><div class='line' id='LC6'><br/></div><div class='line' id='LC7'><span class="k">typedef</span> <span class="k">struct</span> <span class="n">Linha</span> <span class="n">Linha</span><span class="p">;</span></div><div class='line' id='LC8'><span class="k">struct</span> <span class="n">Linha</span> <span class="p">{</span></div><div class='line' id='LC9'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">numLine</span><span class="p">;</span></div><div class='line' id='LC10'>&nbsp;&nbsp;<span class="kt">int</span><span class="o">*</span> <span class="n">sudoku</span><span class="p">;</span></div><div class='line' id='LC11'><span class="p">};</span></div><div class='line' id='LC12'><br/></div><div class='line' id='LC13'><span class="kt">void</span><span class="o">*</span> <span class="nf">verificarLinha</span><span class="p">(</span><span class="kt">void</span> <span class="o">*</span><span class="n">v</span><span class="p">){</span></div><div class='line' id='LC14'>&nbsp;&nbsp;<span class="k">struct</span> <span class="n">Linha</span><span class="o">*</span> <span class="n">linha</span><span class="o">=</span><span class="n">v</span><span class="p">;</span></div><div class='line' id='LC15'>&nbsp;&nbsp;<span class="kt">int</span><span class="o">*</span> <span class="n">toReturn</span><span class="o">=</span><span class="n">malloc</span><span class="p">(</span><span class="mi">3</span><span class="o">*</span><span class="k">sizeof</span><span class="p">(</span><span class="kt">int</span><span class="p">));</span></div><div class='line' id='LC16'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">numLine</span> <span class="o">=</span> <span class="p">(</span><span class="o">*</span><span class="n">linha</span><span class="p">).</span><span class="n">numLine</span><span class="p">;</span></div><div class='line' id='LC17'>&nbsp;&nbsp;<span class="kt">int</span> <span class="o">*</span><span class="n">sudoku</span> <span class="o">=</span> <span class="p">(</span><span class="o">*</span><span class="n">linha</span><span class="p">).</span><span class="n">sudoku</span><span class="p">;</span></div><div class='line' id='LC18'>&nbsp;&nbsp;<span class="kt">int</span> <span class="o">*</span><span class="n">numlinha</span><span class="p">;</span></div><div class='line' id='LC19'>&nbsp;&nbsp;<span class="n">numlinha</span> <span class="o">=</span> <span class="n">sudoku</span><span class="o">+</span><span class="n">numLine</span><span class="o">*</span><span class="mi">9</span><span class="p">;</span></div><div class='line' id='LC20'>&nbsp;&nbsp;<span class="kt">short</span> <span class="kt">int</span> <span class="o">*</span><span class="n">ja</span> <span class="o">=</span> <span class="n">malloc</span><span class="p">(</span><span class="mi">9</span><span class="o">*</span><span class="k">sizeof</span><span class="p">(</span><span class="kt">short</span> <span class="kt">int</span><span class="p">));</span></div><div class='line' id='LC21'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC22'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">j</span><span class="p">;</span></div><div class='line' id='LC23'><br/></div><div class='line' id='LC24'>&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span><span class="mi">9</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">){</span></div><div class='line' id='LC25'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ja</span><span class="p">[</span><span class="n">i</span><span class="p">]</span><span class="o">=</span><span class="mi">0</span><span class="p">;}</span></div><div class='line' id='LC26'><br/></div><div class='line' id='LC27'>&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span><span class="mi">9</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">){</span></div><div class='line' id='LC28'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">j</span><span class="o">=</span> <span class="o">*</span><span class="p">(</span><span class="n">numlinha</span><span class="o">+</span><span class="n">i</span><span class="p">);</span></div><div class='line' id='LC29'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ja</span><span class="p">[</span><span class="n">j</span><span class="p">]</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC30'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC31'>&nbsp;&nbsp;<span class="c1">//Apos a verificacao dos números, exibe na tela os valores possíveis nas posições vazias. </span></div><div class='line' id='LC32'>&nbsp;&nbsp;<span class="c1">//printf(&quot;Valores possíveis em %d:\n&quot;, numLine+1);</span></div><div class='line' id='LC33'>&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="mi">9</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">){</span></div><div class='line' id='LC34'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">j</span><span class="o">=</span> <span class="o">*</span><span class="p">(</span><span class="n">numlinha</span><span class="o">+</span><span class="n">i</span><span class="p">);</span></div><div class='line' id='LC35'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">ja</span><span class="p">[</span><span class="n">j</span><span class="p">]</span><span class="o">==</span><span class="mi">0</span><span class="p">)</span> <span class="n">printf</span><span class="p">(</span><span class="s">&quot;%d&quot;</span><span class="p">,</span> <span class="n">j</span><span class="p">);</span></div><div class='line' id='LC36'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">printf</span><span class="p">(</span><span class="s">&quot;</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC37'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC38'>&nbsp;&nbsp;<span class="n">toReturn</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span><span class="o">=</span><span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC39'>&nbsp;&nbsp;<span class="n">toReturn</span><span class="p">[</span><span class="mi">1</span><span class="p">]</span><span class="o">=</span><span class="n">numLine</span><span class="o">+</span><span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC40'>&nbsp;&nbsp;<span class="n">toReturn</span><span class="p">[</span><span class="mi">2</span><span class="p">]</span><span class="o">=</span><span class="n">j</span><span class="p">;</span></div><div class='line' id='LC41'>&nbsp;&nbsp;<span class="k">return</span> <span class="p">(</span><span class="kt">void</span><span class="o">*</span><span class="p">)</span> <span class="n">ja</span><span class="p">;</span></div><div class='line' id='LC42'><span class="p">}</span></div><div class='line' id='LC43'><br/></div><div class='line' id='LC44'><span class="kt">int</span> <span class="nf">dica</span><span class="p">(){</span></div><div class='line' id='LC45'>&nbsp;&nbsp;<span class="kt">short</span> <span class="kt">int</span> <span class="o">*</span><span class="n">retorno</span><span class="p">;</span></div><div class='line' id='LC46'>&nbsp;&nbsp;<span class="kt">pthread_t</span> <span class="n">thr</span><span class="p">[</span><span class="mi">9</span><span class="p">];</span></div><div class='line' id='LC47'>&nbsp;&nbsp;<span class="kt">int</span> <span class="o">*</span><span class="n">sudoku</span> <span class="o">=</span> <span class="n">malloc</span><span class="p">(</span><span class="mi">81</span><span class="o">*</span><span class="k">sizeof</span><span class="p">(</span><span class="kt">int</span><span class="p">));</span></div><div class='line' id='LC48'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">,</span> <span class="n">j</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC49'>&nbsp;&nbsp;<span class="kt">short</span> <span class="kt">int</span> <span class="o">*</span><span class="n">ja</span><span class="p">;</span></div><div class='line' id='LC50'>&nbsp;&nbsp;<span class="n">printf</span><span class="p">(</span><span class="s">&quot;Escrever o Sudoku a verificar linha por linha</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC51'><br/></div><div class='line' id='LC52'>&nbsp;&nbsp;<span class="n">scanf</span><span class="p">(</span> <span class="s">&quot;%i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i&quot;</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">0</span><span class="p">],</span> <span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">1</span><span class="p">],</span> <span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">2</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">3</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">4</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">5</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">6</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">7</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">8</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">9</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">10</span><span class="p">],</span> <span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">11</span><span class="p">],</span> <span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">12</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">13</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">14</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">15</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">16</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">17</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">18</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">19</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">20</span><span class="p">],</span> <span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">21</span><span class="p">],</span> <span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">22</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">23</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">24</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">25</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">26</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">27</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">28</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">29</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">30</span><span class="p">],</span> <span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">31</span><span class="p">],</span> <span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">32</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">33</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">34</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">35</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">36</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">37</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">38</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">39</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">40</span><span class="p">],</span> <span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">41</span><span class="p">],</span> <span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">42</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">43</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">44</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">45</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">46</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">47</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">48</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">49</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">50</span><span class="p">],</span> <span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">51</span><span class="p">],</span> <span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">52</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">53</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">54</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">55</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">56</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">57</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">58</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">59</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">60</span><span class="p">],</span> <span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">61</span><span class="p">],</span> <span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">62</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">63</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">64</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">65</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">66</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">67</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">68</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">69</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">70</span><span class="p">],</span> <span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">71</span><span class="p">],</span> <span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">72</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">73</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">74</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">75</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">76</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">77</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">78</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">79</span><span class="p">],</span><span class="o">&amp;</span><span class="n">sudoku</span><span class="p">[</span><span class="mi">80</span><span class="p">]);</span></div><div class='line' id='LC53'>&nbsp;&nbsp;<span class="k">struct</span> <span class="n">Linha</span> <span class="n">linha</span><span class="p">;</span></div><div class='line' id='LC54'>&nbsp;&nbsp;<span class="n">linha</span><span class="p">.</span><span class="n">sudoku</span><span class="o">=</span><span class="n">sudoku</span><span class="p">;</span></div><div class='line' id='LC55'><br/></div><div class='line' id='LC56'><br/></div><div class='line' id='LC57'>&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="mi">9</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC58'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">linha</span><span class="p">.</span><span class="n">numLine</span><span class="o">=</span><span class="n">i</span><span class="p">;</span></div><div class='line' id='LC59'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pthread_create</span><span class="p">(</span><span class="o">&amp;</span><span class="n">thr</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="nb">NULL</span><span class="p">,</span> <span class="n">verificarLinha</span><span class="p">,</span> <span class="p">(</span><span class="kt">void</span><span class="o">*</span><span class="p">)</span> <span class="o">&amp;</span><span class="n">linha</span><span class="p">);</span></div><div class='line' id='LC60'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC61'><br/></div><div class='line' id='LC62'>&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="mi">9</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC63'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pthread_join</span><span class="p">(</span><span class="n">thr</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="p">(</span><span class="kt">void</span> <span class="o">**</span><span class="p">)</span> <span class="n">retorno</span><span class="p">);</span></div><div class='line' id='LC64'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ja</span> <span class="o">=</span> <span class="p">(</span><span class="kt">short</span> <span class="kt">int</span> <span class="o">*</span><span class="p">)</span> <span class="n">retorno</span><span class="p">;</span></div><div class='line' id='LC65'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">printf</span><span class="p">(</span><span class="s">&quot;Para a linha %d:</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span><span class="n">i</span><span class="p">);</span></div><div class='line' id='LC66'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">printf</span><span class="p">(</span><span class="s">&quot;(&quot;</span><span class="p">);</span></div><div class='line' id='LC67'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="n">j</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">j</span> <span class="o">&lt;</span> <span class="mi">9</span><span class="p">;</span> <span class="n">j</span><span class="o">++</span><span class="p">){</span></div><div class='line' id='LC68'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">ja</span><span class="p">[</span><span class="n">j</span><span class="p">]</span><span class="o">==</span><span class="mi">0</span><span class="p">)</span> <span class="n">printf</span><span class="p">(</span><span class="s">&quot;%d&quot;</span><span class="p">,</span> <span class="n">j</span><span class="p">);</span></div><div class='line' id='LC69'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC70'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">printf</span><span class="p">(</span><span class="s">&quot;)&quot;</span><span class="p">);</span></div><div class='line' id='LC71'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/* if (*retorno == 0){</span></div><div class='line' id='LC72'><span class="cm">       printf(&quot;Thread encerrou normalmente.\n&quot;);}</span></div><div class='line' id='LC73'><span class="cm">       else{</span></div><div class='line' id='LC74'><span class="cm">    //  printf(&quot;Thread encerrou com valor: %d\n&quot;, retorno[0]);</span></div><div class='line' id='LC75'><span class="cm">    printf(&quot;A linha %d contém duas ocorerencias do numero %d&quot;,retorno[1],retorno[2]);</span></div><div class='line' id='LC76'><span class="cm">    }*/</span></div><div class='line' id='LC77'><br/></div><div class='line' id='LC78'>&nbsp;&nbsp;<span class="p">}</span> </div><div class='line' id='LC79'><br/></div><div class='line' id='LC80'><br/></div><div class='line' id='LC81'><br/></div><div class='line' id='LC82'>&nbsp;&nbsp;<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC83'><br/></div><div class='line' id='LC84'><span class="p">}</span></div><div class='line' id='LC85'><br/></div><div class='line' id='LC86'><span class="kt">int</span> <span class="nf">main</span><span class="p">(){</span></div><div class='line' id='LC87'>&nbsp;&nbsp;<span class="n">dica</span><span class="p">();</span></div><div class='line' id='LC88'>&nbsp;&nbsp;<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC89'><span class="p">}</span></div></pre></div></td>
          </tr>
        </table>
  </div>

  </div>
</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" class="js-jump-to-line-form">
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="button">Go</button>
  </form>
</div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer">
    <ul class="site-footer-links right">
      <li><a href="https://status.github.com/">Status</a></li>
      <li><a href="http://developer.github.com">API</a></li>
      <li><a href="http://training.github.com">Training</a></li>
      <li><a href="http://shop.github.com">Shop</a></li>
      <li><a href="/blog">Blog</a></li>
      <li><a href="/about">About</a></li>

    </ul>

    <a href="/">
      <span class="mega-octicon octicon-mark-github" title="GitHub"></span>
    </a>

    <ul class="site-footer-links">
      <li>&copy; 2014 <span title="0.05477s from github-fe117-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="/site/terms">Terms</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
        <li><a href="/contact">Contact</a></li>
    </ul>
  </div><!-- /.site-footer -->
</div><!-- /.container -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped tooltipped-w" aria-label="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped tooltipped-w"
      aria-label="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-remove-close close js-ajax-error-dismiss"></a>
      Something went wrong with that request. Please try again.
    </div>

  </body>
</html>

